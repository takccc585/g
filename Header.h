#pragma once
double CircleS(double r) {
	double s = 3.14 * r * r;
	return s;
}
double RingS(double r1, double r2){
	double s1 = 3.14 * r1 * r1;
	double s2 = 3.14 * r2 * r2;
	double s3 = abs(s2 - s1);
	return s3;
}
double TriangleP(double h, double a) {
	double b = sqrt(a * a + h * h);
	double sum = b*2+a;
	return sum;
}
bool IsSquare(int k) {
	int i = 0;
	while (i<k) {
		if (i * i == k) {
			return true;
		}
		i++;
	}
	return false;
}