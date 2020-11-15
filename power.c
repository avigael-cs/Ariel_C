double Power(double x, int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return (double) Power(x, y / 2) * Power(x, y / 2); 
    else
        return (double) x * Power(x, y / 2) * Power(x, y / 2); 
} 

double Exponent (int x)
{
Power(2.718, x);
}

