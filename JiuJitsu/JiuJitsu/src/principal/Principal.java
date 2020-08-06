/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package principal;

/**
 *
 * @author Ronaldo
 */
public class Principal {
    public static void main(String[] args) {
       
            Aluno pedro = new Aluno("Pedro", "Masculino", "13/02/2000", 42, 1.62, "9123465648");
            Aluno jose = new Aluno("José", "Masculino", "12/02/2010", 40, 1.60, "9123465678");
            Aluno alexandre = new Aluno("Alexandre", "Masculino", "16/01/1995", 60, 1.77, "9123465675");
            Aluno alex = new Aluno("Alex", "Masculino", "16/01/1995", 60, 1.77, "9123465675");
            
            Aluno maria = new Aluno("Maria", "Feminino", "12/02/2000", 42, 1.60, "9123465679");
            Aluno fernanda = new Aluno("Fernanda", "Feminino", "12/02/2010", 60, 1.70, "9123465679");
            Aluno michele = new Aluno("Michele", "Feminino", "12/02/1995", 65, 1.80, "9123465679");
            
            Aluno[] alunos_mfem = new Aluno[1];
            Aluno[] alunos_tfem = new Aluno[1];
            Aluno[] alunos_nfem = new Aluno[1];
            
            Aluno[] alunos_mmasc = new Aluno[1];
            Aluno[] alunos_tmasc = new Aluno[1];
            Aluno[] alunos_nmasc = new Aluno[2];
            
            alunos_mfem[0] = maria;
            alunos_tfem[0] = fernanda;
            alunos_nfem[0] = michele;
            
            alunos_mmasc[0] = pedro;
            alunos_tmasc[0] = jose;
            alunos_nmasc[0] = alexandre;
            alunos_nmasc[1] = alex;
                      
            Turma m_fem = new Turma("Feminino",  9, 12, "Manhã", 50, alunos_mfem);
            Turma t_fem = new Turma("Feminino", 13, 18, "Tarde", 50, alunos_tfem);
            Turma n_fem = new Turma("Feminino", 19, 30, "Noite", 50, alunos_nfem);
            
            Turma m_masc = new Turma("Masculino",  9, 12, "Manhã", 50, alunos_mmasc);
            Turma t_masc = new Turma("Masculino", 13, 18, "Tarde", 50, alunos_tmasc);
            Turma n_masc = new Turma("Masculino", 19, 30, "Noite", 50, alunos_nmasc);
            
            m_masc.receberAluno(alunos_mmasc, m_masc);
            t_masc.receberAluno(alunos_tmasc, t_masc);
            n_masc.receberAluno(alunos_nmasc, n_masc);
            
            m_fem.receberAluno(alunos_mfem, m_fem);
            t_fem.receberAluno(alunos_tfem, t_fem);
            n_fem.receberAluno(alunos_nfem, n_fem);
            
            m_masc.listarAluno(alunos_mmasc, m_masc);
            t_masc.listarAluno(alunos_tmasc, t_masc);
            n_masc.listarAluno(alunos_nmasc, n_masc);
            
            m_fem.listarAluno(alunos_mfem, m_fem);
            t_fem.listarAluno(alunos_tfem, t_fem);
            n_fem.listarAluno(alunos_nfem, n_fem);

           n_masc.retirarAluno(alex, n_masc, alunos_nmasc);
            
           n_masc.listarAluno(alunos_nmasc, n_masc);
    }
}

        //Aluno(String nome, String sexo, String dtNasc, double peso, double altura, String telefone)
        //Turma(String sexo, int faixaInicial, int faixaFinal, String turno, Aluno[] alunos, int quantidadeMaxima)