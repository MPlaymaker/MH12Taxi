class ILocationService
{
public:
	virtual Location GetLocation(string addr) = 0;
	virtual double CalculateDistance(string from, string to) = 0;
};

