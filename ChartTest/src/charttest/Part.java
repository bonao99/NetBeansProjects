/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package charttest;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;

import javax.swing.JComponent;
import javax.swing.JFrame;

/**
 *
 * @author user1
 */
public class Part {
    double value;
    Color color;
    public Slice(Double value, Color color)
    {
        this.value = value;
        this.color = color;
        
    }
    public class PieShow extends JComponent 
    {
        Part[] parts ={ new Part(5, Color.black), new Part(33, Color.cyan),
    }
    
}
