public class Pessoa {
    private String nome;
    private String endereco;
    private String telefone;

    public Pessoa() {
        this.nome = "Não informado";
        this.endereco = "Não informado";
        this.telefone = "Não informado";
    }

    public Pessoa(String nome, String endereco, String telefone) {
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    @Override
    public String toString() {
        return "Nome: " + nome + "Endereço: " + endereco + "Telefone: " + telefone;
    }
}