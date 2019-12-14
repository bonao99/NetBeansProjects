 System.out.println(line);

 try {
            FileReader reader = new FileReader("MyFile.txt");
            BufferedReader bufferedReader = new BufferedReader(reader);
 
            String line;
 
            while ((line = bufferedReader.readLine()) != null) {
                System.out.println(line);
            }
            reader.close();



File  file1 = new File("/home/tony/Desktop/newfile.txt");                        
                   
            BufferedReader fileread = new BufferedReader (new FileReader(fileread ));

            String line =  fileread.readLine();  

while ((line =   fileread.readLine()) != null)   {
 System.out.println(line);

}          
            StringBuilder sb = new StringBuilder();   