Name:  Beqiri, Livio;  Hart, Kevin;  Lee, Soo Hyeok;  Moutsakis, Manolis;  Warrington, David

Pseudocode Start: 

7) VECTOR <STRUCTURE>
	8) x <DOUBLE>
	9) y <DOUBLE>
10) END VECTOR

13) get_vector (parameters: name, vec)
	14) START get_vector
	Prompt user to enter the name for the vector
	Obtain the name of the vector
	Prompt user to enter the vector's x-value
	Obtain the x-value of the vector
	Prompt user to enter the vector's y-value
	Obtain the y-value of the vector
END get_vector

calc_sum (parameters: vec1, vec2, sum)
	START calc_sum
	Add vec1.x and vec2.x
	Store the value to sum.x
	Add vec1.y and vec2.y
	Store the value to sum.y
END calc_sum

calc_difference (parameters: vec1, vec2, differ)
	START calc_difference
	Subtract vec2.x from vec1.x
	Store the value to differ.x
	Subtract vec2.y from vec1.y
	Store the value to differ.y
END calc_difference

scalar_mult (parameters: vec, scalar, s_mult)
	START calc_multiple
	Get the product of the scalar and vec.x
	Store the value to s_mult.x
	Get the product of the scalar and vec.y
	Store the value to s_mult.y
END calc_multiple

scalar_prod (parameters: vec1, vec2)
	START scalar_prod
	Get the product of vec1.x and vec2.x
	Add the value to vec1.y and vec2.y
	Return the sum
END scalar_prod

magnitude (parameters: vec)
	START magnitude
	Get the sum of the square of vec.x and the square of vec.y
	Find the square root of the sum
	Return the square root
END magnitude

print_vector (parameters: name, vec)
	START print_vector
	Display the name
	Display that it equals (vec.x, vec.y)
END print_vector

main (no parameters)
	START main
	Set vec1, vec2 sum, differ, s_mult1, and s_mult2 to VECTOR variables
	Set name1 and name2 as a string variable 
	
	CALL get_vector (arguments: name1, vec1)
	CALL get_vector (arguments: name2, vec2)
	CALL calc_sum (arguments: vec1, vec2, sum)
	CALL calc_differ (arguments: vec1, vec2, differ)
	CALL scalar_mult (arguments: vec1, 10, s_mult1)
	CALL scalar_mult (arguments: vec2, 10, s_mult2)
	
	CALL print_vector (arguments: name1, vec1)
	CALL print_vector (arguments: name2, vec2)
	CALL print_vector (arguments: “Sum”, sum)\
	CALL print_vector (arguments: “Difference”, differ)
	CALL print_vector (arguments: “Scalar multiple of Vector 1”, s_mult)
	CALL print_vector (arguments: “Scalar multiple of Vector 2”, s_mult)
	
	Display an output prompt with “Scalar product = ”
		CALL scalar_prod (arguments: vec1, vec2)
	Display an output prompt with “Magnitude of Vector 1 = ”
		CALL magnitude (arguments: vec1)
	Display an output prompt with “Magnitude of Vector 2 = ”
		CALL magnitude (arguments: vec2)
END main
