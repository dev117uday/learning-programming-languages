x = -10:10;
y = x;
[x,y] = meshgrid(x,y);
z = x .^2 + y .^2;
meshc(x,y,z)

