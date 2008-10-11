package bitsoperator;

public class BitsOperator
{
	//Constructor
	public BitsOperator()
	{
	    this.m_data = 0;
	    this.m_byte = (byte)0xa2;
	}
	
	//Get/Set 
	public int getByte()
	{
	   return this.m_data;	
	}
	public void setByte(int set_data)
	{
	   this.m_data = set_data;	
	}
	
	//Just example
	public void PrintChar()
	{
		System.out.printf("This is my byte: 0x%02x \n",this.m_byte);
		System.out.format("0x%02x %n",this.m_byte);
	}
	
	
	//Private area
	private int m_data;
	private byte m_byte;

}
