import java.time.LocalDate;

public class PessoaFisica extends Pessoa {
    private String cpf;
    private LocalDate dataNascimento;

    public PessoaFisica() {
        super();
        this.cpf = "000.000.000-00";
        this.dataNascimento = null;
    }

    public PessoaFisica(String nome, String endereco, String telefone, String cpf, LocalDate dataNascimento) {
        super(nome, endereco, telefone);
        this.cpf = cpf;
        this.dataNascimento = dataNascimento;
    }

    public PessoaFisica(String nome, String cpf, LocalDate dataNascimento) {
        super(nome, "Endereço Padrão", "Telefone Padrão");
        this.cpf = cpf;
        this.dataNascimento = dataNascimento;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public LocalDate getDataNascimento() {
        return dataNascimento;
    }

    public void setDataNascimento(LocalDate dataNascimento) {
        this.dataNascimento = dataNascimento;
    }

    @Override
    public String toString() {
        return super.toString() + "CPF: " + cpf + "Data de Nascimento: " + (dataNascimento != null ? dataNascimento.toString() : "Não informada");
    }
}