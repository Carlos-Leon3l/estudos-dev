import java.time.LocalDate;

public class Funcionario extends PessoaFisica {
    private String matricula;
    private String cargo;
    private double salario;
    private LocalDate dataAdmissao;

    public Funcionario() {
        super();
        this.matricula = "Não definida";
        this.cargo = "Não definido";
        this.salario = 0.0;
        this.dataAdmissao = LocalDate.now();
    }

    public Funcionario(String nome, String endereco, String telefone, String cpf, LocalDate dataNascimento,
                       String matricula, String cargo, double salario, LocalDate dataAdmissao) {
        super(nome, endereco, telefone, cpf, dataNascimento);
        this.matricula = matricula;
        this.cargo = cargo;
        this.salario = salario;
        this.dataAdmissao = dataAdmissao;
    }

    public Funcionario(String nome, String cpf, LocalDate dataNascimento, String matricula, String cargo, double salario) {
        super(nome, "Endereço Padrão Func.", "Telefone Padrão Func.", cpf, dataNascimento);
        this.matricula = matricula;
        this.cargo = cargo;
        this.salario = salario;
        this.dataAdmissao = LocalDate.now();
    }

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }

    public String getCargo() {
        return cargo;
    }

    public void setCargo(String cargo) {
        this.cargo = cargo;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        if (salario >= 0) {
            this.salario = salario;
        } else {
            System.out.println("Salário não pode ser negativo.");
        }
    }

    public LocalDate getDataAdmissao() {
        return dataAdmissao;
    }

    public void setDataAdmissao(LocalDate dataAdmissao) {
        this.dataAdmissao = dataAdmissao;
    }

    @Override
    public String toString() {
        return super.toString() + "\nMatrícula: " + matricula + "Cargo: " + cargo +
                "Salário: R$ " + String.format("%.2f", salario) + "Data de Admissão: " + dataAdmissao.toString();
    }
}
