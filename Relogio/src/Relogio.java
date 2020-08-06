
import java.io.PrintStream;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ronaldo
 */
public class Relogio {
    private Contador hora;
    private Contador minuto;
    private boolean formato;
    
    public Contador getHora(){
        return hora;
    }
    
    public void setHora(Contador hora){
        this.hora = hora;
    }

    public Contador getMinuto() {
        return minuto;
    }

    public void setMinuto(Contador minuto) {
        this.minuto = minuto;
    }

    public boolean getFormato() {
        return formato;
    }

    public void setFormato(boolean formato) {
        this.formato = formato;
    }

    public Relogio(Contador hora, Contador minuto, boolean formato) {
        this.hora = hora;
        this.minuto = minuto;
        this.formato = formato;
    }
    
    public void ticTac(Relogio r1){
        if(r1.getMinuto().getValor() == 0){
            r1.getHora().contar(hora);
        }
    }
    
    public void mostrarHora(Relogio r1){
        if(r1.getFormato() == true){
            if(r1.getHora().getValor() < 12){
                System.out.printf("%2d:%2d AM", r1.getHora().getValor(), r1.getMinuto().getValor());
            }
            
            else{
                System.out.printf("%2d:%2d PM", r1.getHora().getValor() - 12, r1.getMinuto().getValor());
            }
        }
        
        else{
            System.out.printf("%2d:%2d", r1.getHora().getValor(), r1.getMinuto().getValor());
        }
    }
}
