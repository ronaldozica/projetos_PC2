/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ronaldo
 */
public class Contador {
    private int valor;
    private int limite;
    
    public int getValor(){
        return valor;
    }
    
    public void setValor(int valor){
        this.valor = valor;
    }

    public int getLimite() {
        return limite;
    }

    public void setLimite(int limite) {
        this.limite = limite;
    }

    public Contador(int valor, int limite) {
        this.valor = valor;
        this.limite = limite;
    }
    
    public void contar(Contador contador_atual){
        contador_atual.setValor((contador_atual.getValor() + 1) % contador_atual.getLimite());
    }
}


