package STUDYING.JFrame_Java.Part_2;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.border.Border;

import java.awt.*;

public class Main {
    static ImageIcon scale(String path, int w, int h) {
        return new ImageIcon(
                new ImageIcon(path)
                        .getImage()
                        .getScaledInstance(w, h, Image.SCALE_SMOOTH)
        );
    }
    public static void main(String[] args) {

        //ImageIcon image = new ImageIcon("STUDYING/JFrame_Java/Part_2/logo.png");
        Border border = BorderFactory.createLineBorder(Color.green, 3);

        JLabel label = new JLabel(); //criar um label

        label.setText("Bro, hello?"); //adiciona um texto
        label.setIcon(scale("STUDYING/JFrame_Java/Part_2/logo.png", 100, 100)); //adiciona uma imagem
        label.setHorizontalTextPosition(JLabel.CENTER); //coloca a posicao do texto da imagem
        label.setVerticalTextPosition(JLabel.TOP); // coloca a posicao do texto da imagem
        label.setForeground(new Color(0x00FF00)); //coloca a cor do texto
        label.setFont(new Font("MV Boli", Font.PLAIN, 50)); //coloca a fonte do texto
        label.setIconTextGap(100); //coloca a distancia do texto para imagem
        label.setBackground(Color.black); //coloca a cor
        label.setOpaque(true); //diz se é opaco ou nao para a cor ir
        label.setBorder(border); //colocar a borda
        label.setVerticalAlignment(JLabel.CENTER); //alinhamento vertical
        label.setHorizontalAlignment(JLabel.CENTER); //alinhamento horizontal
        //label.setBounds(100,100,250,250);

        JFrame janela = new JFrame();
        janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //janela.setSize(500, 500);
        //janela.setLayout(null);
        janela.setVisible(true);
        janela.add(label);
        janela.pack();
    }
}
