class Student extends Person{
	private int[] testScores;
    Student(String firstName,String lastName,int id,int[] a)
    {
        super(firstName,lastName,id);
        testScores=new int[a.length];
        for(int i=0;i<a.length;i++)
            testScores[i]=a[i];
    }
    char calculate()
    {
        int sum=0;
        for(int i=0;i<testScores.length;i++)
            sum+=testScores[i];
        int avg=sum/testScores.length;
        if(avg<=100 && avg>=90)
            return 'O';
        else if(avg<90 && avg>=80)
            return 'E';
        else if(avg<80 && avg>=70)
            return 'A';    
        else if(avg<70 && avg>=55)
            return 'P';
        else if(avg<55 && avg>=40)
            return 'D';
        else
            return 'T';
    }
}
