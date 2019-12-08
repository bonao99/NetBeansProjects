/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package readfilesplitwords;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.Reader;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author tony
 */
public class ReadFileSplitwords {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
           try {
            File  file1 = new File("/home/tony/Desktop/test.txt");
            
            BufferedReader br = new BufferedReader (new FileReader(file1));
            
         
            StringBuilder sb = new StringBuilder();
            String line = br.readLine();
            
            while(line != null)
            {
                sb.append(line);
                sb.append(System.lineSeparator());
                line = br.readLine();
                System.out.println(line);
                
                
            }
            
            
        } catch (FileNotFoundException ex) {
            Logger.getLogger(ReadFileSplitwords.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(ReadFileSplitwords.class.getName()).log(Level.SEVERE, null, ex);
        }
       
 
        
         
    }
    
}
