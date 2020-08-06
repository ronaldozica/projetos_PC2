package principal;

public class Aluno {
    private String nome;
    private String sexo;
    private String dtNasc;
    private double peso;
    private double altura;
    private String telefone;
    
    public Aluno(){
        this.nome = "";
        this.sexo = "";
        this.dtNasc = "";
        this.peso = 0.0;
        this.altura = 0.0;
        this.telefone = "";
    }
    
    public Aluno(String nome, String sexo, String dtNasc, double peso, double altura, String telefone){
        this.nome = nome;
        this.sexo = sexo;
        this.dtNasc = dtNasc;
        this.peso = peso;
        this.altura = altura;
        this.telefone = telefone;
    }
    
    public String getNome() {
        return nome;
    }
    public void setNome(){
        this.nome = nome;
    }
    public String getSexo() {
        return sexo;
    }
    public void setSexo(){
        this.sexo = sexo;
    }
    public String getDtNasc() {
        return dtNasc;
    }
    public void setDtNasc(){
        this.dtNasc = dtNasc;
    }

    public double getPeso() {
        return peso;
    }

    public void setPeso(double peso) {
        this.peso = peso;
    }

    public double getAltura() {
        return altura;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }
}
