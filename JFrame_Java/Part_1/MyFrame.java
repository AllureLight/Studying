package STUDYING.JFrame_Java.Part_1;

import java.awt.Color;
import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class MyFrame extends JFrame{
    MyFrame(){
        this.setTitle("Teste"); //Titulo
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //Operação de fechar
        this.setResizable(false); //Controla para mudar o tamanho da this
        this.setSize(420,420); //Tamanho
        this.setVisible(true); //Visualizar

        //rever isso
        ImageIcon image = new ImageIcon("STUDYING/JFrame_Java/Part_1/logo.png"); //criar icon de imagem
        this.setIconImage(image.getImage()); //troca a imagem
        this.getContentPane().setBackground(new Color(0,0,0));
    }
}
