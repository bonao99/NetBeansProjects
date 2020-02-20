/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package charttest;

import javax.swing.JPanel;
import org.jfree.chart.ChartFactory;
import org.jfree.chart.ChartPanel;
import org.jfree.chart.JFreeChart;
import static org.jfree.chart.demo.PieChartDemo1.createDemoPanel;
import org.jfree.data.general.DefaultPieDataset;
import org.jfree.data.general.PieDataset;
import org.jfree.ui.ApplicationFrame;

/**
 *
 * @author user1
 */
public class jChartPie extends ApplicationFrame
{
    
    public jChartPie(String title) {
        super(title);
        
        setContentPane(createDemoPanel());
        
    }
    
      private static PieDataset createDataset( )
      {
      DefaultPieDataset dataset = new DefaultPieDataset( );
      dataset.setValue( "IPhone 5s" , new Double( 20 ) );  
      dataset.setValue( "SamSung Grand" , new Double( 20 ) );   
      dataset.setValue( "MotoG" , new Double( 40 ) );    
      dataset.setValue( "Nokia Lumia" , new Double( 10 ) );  
      return dataset;         
     }
      

    
  private static JFreeChart createChart(String title, PieDataset dataset ) {
      JFreeChart chart = ChartFactory.createPieChart(      
         title,   // chart title 
         dataset,          // data    
         true,             // include legend   
         true, 
         false);

      return chart;
   }
   
    
    public static JPanel createDemoPanel()
    {
        JFreeChart chart = createChart("Cell Sales",createDataset());
        return new ChartPanel(chart);
        
    }
    
        
}