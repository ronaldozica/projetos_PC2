package principal;

public class Turma {
    private String sexo;
    private int faixaInicial;
    private int faixaFinal;
    private int quantidadeMaxima;
    private String turno;
    private Aluno[] alunos;
    
    public Turma(int quantidadeMaxima){
        sexo = "";
        turno = "";
        faixaInicial = 0;
        faixaFinal = 0;
        alunos = new Aluno[quantidadeMaxima];
    }
    
    public Turma(String sexo, int faixaInicial, int faixaFinal, String turno, int quantidadeMaxima, Aluno[] alunos)
    {
        this.sexo = sexo;
        this.faixaInicial = faixaInicial;
        this.faixaFinal = faixaFinal;
        this.turno = turno;
        this.quantidadeMaxima = quantidadeMaxima;
        this.alunos = alunos;
    }

    public String getSexo(){
        return sexo;
    }
    
    public void setSexo(String sexo){
        this.sexo = sexo;
    }    
            
    public int getFaixaInicial() {
        return faixaInicial;
    }

    public void setFaixaInicial(int faixaInicial) {
        this.faixaInicial = faixaInicial;
    }

    public int getFaixaFinal() {
        return faixaFinal;
    }

    public void setFaixaFinal(int faixaFinal) {
        this.faixaFinal = faixaFinal;
    }

    public int getQuantidadeMaxima() {
        return quantidadeMaxima;
    }

    public void setQuantidadeMaxima(int quantidadeMaxima) {
        this.quantidadeMaxima = quantidadeMaxima;
    }

    public String getTurno() {
        return turno;
    }

    public void setTurno(String turno) {
        this.turno = turno;
    }

    public Aluno[] getAlunos() {
        return alunos;
    }

    public void setAlunos(Aluno[] alunos) {
        this.alunos = alunos;
    }
    
    public void receberAluno(Aluno[] alunos, Turma turma_atual){        
        turma_atual.alunos = alunos;
    }
    
    public void listarAluno(Aluno[] alunos, Turma turma_atual){
        for(int i = 0; i < alunos.length; i ++){
            if(alunos[i] != null){
                System.out.println("O aluno "+alunos[i].getNome()+" está na turma do horário: "+turma_atual.getTurno()+" "+turma_atual.getSexo());
            }
        }
    }

    
    public void retirarAluno(Aluno a, Turma turma_atual, Aluno[] alunos_atual){
        
        for(int i = 0; i < alunos_atual.length; i ++){
            if(alunos_atual[i] == a){
                alunos_atual[i] = null;
            }
        }
    }
}
    
    
/*    public void retirarAluno(Aluno a, Turma turma_atual, Aluno[] alunos_atual){
        int cont = 0;
        
        for(int i = 0; i < alunos_atual.length; i ++){
            if(alunos_atual[i] == a){
                cont ++;
                //alunos_atual[i] = alunos_atual[i++];
            }
        }
        
        for(int i = 0; i < (alunos_atual.length - cont); i ++){
        }
    }
*/
