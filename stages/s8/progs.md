class
	A {
		decl
			int i;
			int f0();
			int f1();
		enddecl
		int f0() {
			decl
				int c;
			enddecl
			begin
				c = self.f1();
				write(self.i);
				return 1;
			end
		}
		int f1() {
			decl
			enddecl
			begin
				self.i=0;
				write("In A F1");
				return 1;
			end
		}
	}
	B extends A {
		decl
			int f1();
		enddecl
		int f1() {
			decl
			enddecl
			begin
				self.i=1;
				write("In B F1");
				return 1;
			end
		}
	}
endclass

decl
	int n;
	A obj;
enddecl

int main() {
	decl
	enddecl
	begin
		n=initialize();
		read(n);
		write(n);
		if(n>0) then
			obj = new(A);
		else
			obj = new(B);
		endif;
		n = obj.f0();
		return 1;
	end
}


// -------------------------------------------------------------------------------

class
	A {
		decl
			int f0();
			int f1();
		enddecl
		int f0() {
			begin
				write("In Class A f0");
				return 1;
			end
		}
		int f1() {
			begin
				write("In Class A f1");
				return 1;
			end
		}
		}
	B extends A {
		decl
			int f0();
			int f2();
		enddecl
		int f0() {
			begin
				write("In Class B f0");
				return 1;
			end
		}
		int f2() {
			begin
				write("In Class B f2");
				return 1;
			end
		}
	}
	C extends B {
		decl
			int f0();
			int f2();
			int f4();
		enddecl
		int f0() {
			begin
				write("In Class C f0");
				return 1;
			end
		}
		int f2() {
			begin
				write("In Class C f2");
				return 1;
			end
		}
		int f4() {
			begin
				write("In Class C f4");
				return 1;
			end
		}
	}
endclass

decl
	A obj;
	A test_obj;
enddecl

int main() {
	decl
		int temp,n;
	enddecl
	begin
		temp= initialize();
		read(n);
		
		if(n < 0)then
			obj = new(A);
		else
			if(n == 0)then
				obj = new(B);
			else
				if(n > 0)then
					obj = new(C);
				endif;
			endif;
		endif;
		
		test_obj = obj;
		write(test_obj.f0());
		
		return 1;
	end
}

// ------------------------------------------------------------------------------------

class
	Rectangle {
		decl
			int length;
			int breadth;
			int set_dimensions();
			int area();
		enddecl
		int area() {
			decl
			enddecl
			begin
				return self.length * self.breadth;
			end
		}
		int set_dimensions() {
			decl
			enddecl
			begin
				write("Enter length ");
				read(self.length);
				write("Enter breadth");
				read(self.breadth);

				return 0;
			end
		}
	}
	Square extends Rectangle {
		decl
			int set_dimensions();
		enddecl
		int set_dimensions() {
			decl
			enddecl
			begin
				write("Enter side sq");
				read(self.length);
				self.breadth = self.length;
				return 0;
			end
		}
	}
endclass

decl
	Rectangle obj;
enddecl

int main() {
	decl
		int x;
	enddecl
	begin
		x=initialize();
		
		write("Enter");
		write("1 Rectangle");
		write("2 Square");
		
		read(x);
		
		if(x==1) then
			obj = new(Rectangle);
		else
			obj = new(Square);
		endif;
		
		x = obj.set_dimensions();
		write(obj.area());
		return 0;
	end
}