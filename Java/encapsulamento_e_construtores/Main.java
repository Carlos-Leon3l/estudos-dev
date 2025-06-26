import java.time.LocalDate;
import java.time.Month;

public class Main {
    public static void main(String[] args) {
        Pessoa pessoa1 = new Pessoa();
        pessoa1.setNome("Carlos Leonel\n");
        pessoa1.setEndereco("Rua das Palmeiras, 987\n");
        pessoa1.setTelefone("11999998888\n");

        System.out.println("Pessoa 1: " + pessoa1);

        PessoaFisica pf1 = new PessoaFisica("Fernanda Souza\n", "Alameda das Flores, 321\n", "21911112222\n",
                "321.654.987-00\n", LocalDate.of(1990, Month.JULY, 15));
        System.out.println("\nPessoa Física 1: " + pf1);

        PessoaJuridica pj1 = new PessoaJuridica("Tech Soluções Ltda\n", "Av. das Indústrias, 456\n", "3132223333\n",
                "98.765.432/0001-55\n", "654987321\n");
        System.out.println("\nPessoa Jurídica 1: " + pj1);

        Funcionario func1 = new Funcionario("Joana Martins\n", "444.555.666-77\n", LocalDate.of(1985, Month.MARCH, 20),
                "F003", "Engenheira de Software\n", 7500.00);
        func1.setEndereco("Rua da Tecnologia, 200\n");
        System.out.println("\nFuncionário 1: " + func1);

        Funcionario func2 = new Funcionario("Bruno Lima\n", "Rua Nova, 890\n", "41977776666\n",
                "111.222.333-44\n", LocalDate.of(1995, Month.NOVEMBER, 5),
                "F004\n", "Arquiteto de Sistemas\n", 8200.50, LocalDate.of(2022, Month.JANUARY, 10));
        System.out.println("\nFuncionário 2: " + func2);

        System.out.println("\nNome do Funcionário 1: " + func1.getNome());
        System.out.println("Salário do Funcionário 2: R$ " + String.format("%.2f", func2.getSalario()));

        func1.setSalario(7800.00);
        System.out.println("Novo Salário do Funcionário 1: R$ " + String.format("%.2f", func1.getSalario()));
    }
}
