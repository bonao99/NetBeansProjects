/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package charttest;
import javax.swing.JOptionPane;


/**
 *
 * @author user1
 */
public class DiagLogViewer {
    
    public static void main(String[] args)
    {
       String name;
        name = JOptionPane.showInputDialog("What is your name?");
        System.out.println(name);
        JOptionPane.showMessageDialog(null, name);
    }
    
}
