public class PessoaJuridica extends Pessoa {
    private String cnpj;
    private String inscricaoEstadual;

    public PessoaJuridica() {
        super();
        this.cnpj = "00.000.000/0000-00";
        this.inscricaoEstadual = "Isento";
    }

    public PessoaJuridica(String nome, String endereco, String telefone, String cnpj, String inscricaoEstadual) {
        super(nome, endereco, telefone);
        this.cnpj = cnpj;
        this.inscricaoEstadual = inscricaoEstadual;
    }

    public PessoaJuridica(String nomeFantasia, String cnpj) {
        super(nomeFantasia, "Endereço Padrão PJ", "Telefone Padrão PJ");
        this.cnpj = cnpj;
        this.inscricaoEstadual = "A definir";
    }

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getInscricaoEstadual() {
        return inscricaoEstadual;
    }

    public void setInscricaoEstadual(String inscricaoEstadual) {
        this.inscricaoEstadual = inscricaoEstadual;
    }

    @Override
    public String toString() {
        return super.toString() + "CNPJ: " + cnpj + "Inscrição Estadual: " + inscricaoEstadual;
    }
}