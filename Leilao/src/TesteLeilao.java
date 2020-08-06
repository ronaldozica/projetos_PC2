/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author aluno
 */
public class TesteLeilao {
    public static void main(String[] args) {
        
        Pessoa P1 = new Pessoa("Ronaldo", "999420561");
        Pessoa P2 = new Pessoa("José", "123456789");
        Pessoa P3 = new Pessoa("Maria", "987654321");
        
        Leilao L = new Leilao(2);
        
        Lance lance1 = new Lance(P1, 10500);
        Lance lance2 = new Lance(P2, 2200000);
        Lance lance3 = new Lance(P3, 2300000);
        
        Lote lote1 = new Lote("Bicicleta", lance1);
        Lote lote2 = new Lote("Casa em Buzios", lance2);
        
        boolean teste1 = L.adicionaLote(lote1);
        
        boolean teste2 = L.adicionaLote(lote2);
        
        if(!teste1){
            System.out.println("Erro ao adicionar "+lote1.getDescricao());
        }
        
        if(!teste2){
            System.out.println("Erro ao adicionar "+lote2.getDescricao());
        }
        
        boolean teste3 = L.recebeLance(lance1, lote1.getDescricao());
        
        boolean teste4 = L.recebeLance(lance2, lote2.getDescricao());
        
        if(!teste3){
            System.out.println("Erro ao adicionar "+L.getLeilao()[0].getDescricao());
        }
        
        if(!teste4){
            System.out.println("Erro ao adicionar "+L.getLeilao()[1].getDescricao());
        }
        
        L.getLeilao()[1].verificaLance(lance3);
        
        String imprime = L.imprimeLotes();
        
        System.out.println(imprime);
        
        imprime = L.encerraLeilao();
        
        System.out.println(imprime);
        
        
    }
}
