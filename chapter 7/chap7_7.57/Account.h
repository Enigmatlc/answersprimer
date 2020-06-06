//Exercise 7.57: Write your own version of the Account class.
class Account {
public:
	static double rate() { return interestRate; }
	static void rate(double);
private:
	static double interestRate;
	static constexpr int period = 30;// period is a constant expression
	double daily_tbl[period];
};
void Account::rate(double newRate) {
	interestRate = newRate;
}