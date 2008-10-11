package test;

import junit.framework.Assert;
import junit.framework.TestCase;

import org.junit.After;
import org.junit.Before;

import bitsoperator.BitsOperator;

public class testBitOperator extends TestCase
{

	@Before
	public void setUp() throws Exception
	{
	}

	@After
	public void tearDown() throws Exception
	{
	}

	public void testBitsOperator()
	{
		BitsOperator b_operator = new BitsOperator();
		b_operator.setByte(7);
		b_operator.PrintChar();
		
		Assert.assertEquals ("Set byte", b_operator.getByte(), 7);

	}

}
