/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package messenger;

import com.sun.corba.se.spi.activation.Server;
import java.io.IOException;
import java.io.InputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author user1
 */
public class Messenger {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
 try {
ServerSocket server = new ServerSocket(5540);
Socket client;
byte inputText[] = new byte[128];
System.out.println("String socket server...");
while(true)
{
inputText = new byte[128];
System.out.println("Listening on port 5540...");
client = server.accept();
System.out.println(client.getInetAddress().getHostAddress());
InputStream in = new ObjectInputStream(client.getInputStream());
OutputStream out = new ObjectOutputStream(client.getOutputStream());
in.read(inputText);
out.write(new Date().toString().getBytes());
System.out.println(new String(inputText));
}
} catch (IOException ex) {
Logger.getLogger(Server.class.getName()).log(Level.SEVERE, null, ex);
}
        
    }
    
}
