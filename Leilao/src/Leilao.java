/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author aluno
 */

public class Leilao {
    private Lote[] leilao;

    public Lote[] getLeilao() {
        return leilao;
    }

    public void setLeilao(Lote[] leilao) {
        this.leilao = leilao;
    }

    public Leilao(Lote[] leilao) {
        this.leilao = leilao;
    }

    public Leilao(int num_lotes) {
        leilao = new Lote[num_lotes];
    }
    
    public boolean adicionaLote(Lote lote){
        for(int i = 0; i < this.leilao.length; i ++){
            if(this.leilao[i] == null)
            {
                this.leilao[i] = lote;
                return true;
            }
        }
        return false;
    }
    
    public boolean recebeLance(Lance lance, String descricao){
        for(int i = 0; i < this.leilao.length; i ++){
            if(this.leilao[i].getDescricao().equals(descricao))
            {
                this.leilao[i].setMaiorLance(lance);
                return true;
            }
        }
        return false;
    }
    
    public String imprimeLotes(){
        String imprime = "";
        
        for(Integer i = 0; i < this.leilao.length; i ++){
            imprime = imprime.concat("Lote ");
            imprime = imprime.concat(i.toString());
            imprime = imprime.concat(": ");
            imprime = imprime.concat(this.leilao[i].getDescricao());
            imprime = imprime.concat("\n");
        }
        
        return imprime;
    }
    
    
    public String encerraLeilao(){
        String imprime = "";
        
        for(int i = 0; i < this.leilao.length; i ++){
            imprime = imprime.concat("O comprador do lote ");
            imprime = imprime.concat(this.leilao[i].getDescricao());
            imprime = imprime.concat(" foi: ");
            imprime = imprime.concat(this.leilao[i].getMaiorLance().getPessoa().getNome());
            imprime = imprime.concat("\n");
        }
        
        imprime = imprime.concat("\nO leilão está encerrado.\n");
        
        return imprime;
    }
}
