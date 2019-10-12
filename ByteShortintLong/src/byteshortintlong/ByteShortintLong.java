/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package byteshortintlong;

/**
 *
 * @author tony
 */
public class ByteShortintLong {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
     
        
        
        int myValue = 10000;
        int myMinIntValue = Integer.MIN_VALUE;
        int myMaxIntValue = Integer.MAX_VALUE;
        
        System.out.println("Interger Minimun Value = "+ myMaxIntValue);
        System.out.println("Integer Maximun Value "+ myMaxIntValue);
    
        System.out.println("Busted Max Value"+(myMaxIntValue + 1));
        System.out.println("Busted Min Value"+ (myMinIntValue +1));
        
        byte myMinByteValue = Byte.MIN_VALUE;
        byte myMaxByteValue = Byte.MAX_VALUE;
        
        System.out.println("Byte Min Value"+myMinByteValue);
        System.out.println("Byte Max Value"+myMaxByteValue);
       
        
        short myMinShortValue = Short.MIN_VALUE;
        short  myMaxShortValue = Short.MAX_VALUE;
        System.out.println("Short Minimum Value"+myMinShortValue);
        System.out.println("Short Minimum Value"+myMaxShortValue);         
        
    
        long lonsample = 100L;
        
        long myMinLongValue = Long.MIN_VALUE;
        long myMaxLongValue = Short.MAX_VALUE;
        System.out.println("Long Minimum Value"+myMinLongValue);
        System.out.println("Long Minimum Value"+myMaxLongValue);         
        
       char myChar = 'D';
       char myUnitcodeChar = '\u0044';
       
       
        String myString = "This is a string";
        System.out.println("myString is equal to "+myString);
        myString = myString + ", and this is more";
        System.out.println("myString is equal to "+myString);
        String  numberString = "250.55";
        numberString = numberString + "49.50";
        String lastSting = "10";
        
        int myInt = 50;
        lastSting = lastSting + myInt;
        System.out.println("lasttring is equal to " + lastSting);
        
        
        
        
        

    
    boolean myTrueBool = true;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
                
        
    }
    
}
