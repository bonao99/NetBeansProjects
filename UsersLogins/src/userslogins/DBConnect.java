/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package userslogins;

import com.sun.rowset.CachedRowSetImpl;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.sql.rowset.CachedRowSet;


/**
 *
 * @author tony
 */
public class DBConnect {   

    private  Connection getConnect() 
    {
          Connection conn = null;
                   try 
                {
                conn = DriverManager.getConnection("jdbc:postgresql://localhost:5432/MEJIA", "postgres", "polo99");
                              
                
                } catch (SQLException ex) {
                Logger.getLogger(DBConnect.class.getName()).log(Level.SEVERE, null, ex);
            }
            
        return conn;
            
    }
    
    /* Cacherowset */
    

    
    public void excute(String sql)
    {
        try 
            {
                
                Connection conn = getConnect();           
                Statement st = conn.createStatement(ResultSet.CLOSE_CURSORS_AT_COMMIT, ResultSet.TYPE_SCROLL_INSENSITIVE);
                st.execute(sql);
                st.close();
                conn.close();
                                
            } catch (SQLException ex) {
            Logger.getLogger(DBConnect.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        
        
    }
    
        public CachedRowSet excuteQuerry(String sql)
    {
        CachedRowSet rowset = null;
        try 
            {
                
                Connection conn = getConnect();  

                Statement st = conn.createStatement(ResultSet.CLOSE_CURSORS_AT_COMMIT, ResultSet.TYPE_SCROLL_INSENSITIVE);
                ResultSet rs = st.executeQuery(sql);              
                rowset = new CachedRowSetImpl();
                rowset.populate(rs);
                rs.close();
                st.close();
                conn.close();                            
               
                
            } catch (SQLException ex) {
            Logger.getLogger(DBConnect.class.getName()).log(Level.SEVERE, null, ex);
        }
        
    return rowset;
        
    }
           
        
        
    
}
