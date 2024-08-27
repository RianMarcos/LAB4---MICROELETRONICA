library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity aux_relogio_module is

    Port ( d_x : in  integer; 
		dig_x_internal : out  STD_LOGIC_VECTOR (6 downto 0) := "1111111");
			  
end aux_relogio_module;

architecture Behavioral of aux_relogio_module is

begin

		dig_x_internal <= "0000001" when d_x = 0 else
		"1001111" when d_x = 1 else
		"0010010" when d_x = 2 else
		"0000110" when d_x = 3 else
		"1001100" when d_x = 4 else
		"0100100" when d_x = 5 else
		"0100000" when d_x = 6 else
		"0001111" when d_x = 7 else
		"0000000" when d_x = 8 else
		"0000100" when d_x = 9 else
		"1111111";
	
end Behavioral;