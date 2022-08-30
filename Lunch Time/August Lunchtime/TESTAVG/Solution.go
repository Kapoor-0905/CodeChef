package main

import "fmt"

func main() {
	var a, b, c, t int
	var avg1, avg2, avg3 int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		fmt.Scan(&a, &b, &c)
		avg1 = (a + b) / 2
		avg2 = (b + c) / 2
		avg3 = (a + c) / 2
		if avg1 >= 35 && avg2 >= 35 && avg3 >= 35 {
			fmt.Println("PASS")
		} else {
			fmt.Println("FAIL")
		}
	}
}
