library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity relogio_module is

	generic (freq: INTEGER := 5; periodo: integer := 1); --50MHz e 500ms

    Port ( rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           pausa : in  STD_LOGIC;
           conf : in  STD_LOGIC;
			  dig_x: out STD_LOGIC_VECTOR (6 downto 0);
			 anodo : out STD_LOGIC_VECTOR (3 downto 0));
		
end relogio_module;

------------------------------------------------------------------------

architecture Behavioral of relogio_module is

	constant max: integer := 5; --50 milhoes
	constant max_clk: integer := 2;

	component aux_relogio_module is
		Port ( d_x: in integer;
				dig_x_internal: out STD_LOGIC_VECTOR (6 downto 0)); -- display inicializa apagado
	end component;

	signal d_x : integer; -- Nova variável interna para armazenar o valor de d_x
	signal d_x_internal : integer; -- Nova variável interna para armazenar o valor de d_x
	signal anodo_aux: STD_LOGIC_VECTOR(3 downto 0) := "1110";
	
begin

d_to_dig: aux_relogio_module PORT MAP (d_x=>d_x, dig_x_internal=>dig_x);
------------------------------------------------------------------------


	--processo referente ao display
	process (clk)
	
		variable aux_clk: integer := 0;
		begin

		if(clk'event and clk = '1') then
			aux_clk := aux_clk + 1;
			if(aux_clk = max_clk) then
				aux_clk := 0;
				if(anodo_aux = "1110") then
					anodo <= "1101";
					anodo_aux <= "1101";
				elsif(anodo_aux  = "1101") then
					anodo <= "1011";
					anodo_aux <= "1011";
				elsif(anodo_aux  = "1011") then
					anodo <= "0111";
					anodo_aux <= "0111";
				elsif(anodo_aux  = "0111") then
					anodo <= "1110";
					anodo_aux <= "1110";
				end if;
			end if;
		end if;

	end process;

------------------------------------------------------------------------

	--processo referente ao relógio
	process (clk, rst)
	
	--variaveis correspondentes aos displays
	variable d_1: integer range 0 to 10 := 0;
	variable d_2: integer range 0 to 10 := 0;
	variable d_3: integer range 0 to 10 := 0;
	variable d_4: integer range 0 to 10 := 0;
	variable d_5: integer range 0 to 10 := 0;
	variable d_6: integer range 0 to 10 := 0;
	
	variable cont: integer range 0 to max := 0;

	--signal aux_cont: STD_LOGIC_VECTOR (3 downto 0);
	
		begin
		
		--conf = '1', entao horas e minutos
		 if(conf = '1') then
					if(anodo_aux = "1110") then
						d_x <= d_3;
					elsif(anodo_aux = "1101") then
						d_x <= d_4;
					elsif(anodo_aux = "1011") then
						d_x <= d_5;
					elsif(anodo_aux = "0111") then
						d_x <= d_6;
					end if;
						
		 elsif(conf = '0') then --conf = '0', entao minutos e segundos
					if(anodo_aux = "1110") then
						d_x <= d_1;
					elsif(anodo_aux = "1101") then
						d_x <= d_2;
					elsif(anodo_aux = "1011") then
						d_x <= d_3;
					elsif(anodo_aux = "0111") then
						d_x <= d_4;
					end if;
		 end if;
	
		if(rst = '1') then
		d_1 := 0;
		d_2 := 0;
		d_3 := 0;
		d_4 := 0;
		d_5 := 0;
		d_6 := 0;
		cont := 0;

		elsif(clk'event and clk = '1') then
			cont := cont + 1;
			if(pausa = '0') then
				if(cont = max) then
					d_1 := d_1 + 1;
					if(d_1 = 10) then
						d_1 := 0;
						d_2 := d_2 + 1;
						if(d_2 = 6) then
							d_1 := 0;
							d_2 := 0;
							d_3 := d_3 + 1;
							if(d_3 = 10) then
								d_1 := 0;
								d_2 := 0;
								d_3 := 0;
								d_4 := d_4 + 1;
								if(d_4 = 6) then
									d_1 := 0;
									d_2 := 0;
									d_3 := 0;
									d_4 := 0;
									d_5 := d_5 + 1;
									if(d_5 = 10) then
										d_1 := 0;
										d_2 := 0;
										d_3 := 0;
										d_4 := 0;
										d_5 := 0;
										d_6 := d_6 + 1;
										if(d_6 = 6 and d_5 = 10) then
											d_1 := 0;
											d_2 := 0;
											d_3 := 0;
											d_4 := 0;
											d_5 := 0;
											d_6 := 0;
										end if; --d_6
									end if; --d_5
								end if; --d_4
							end if; --d_3
						end if; --d_2
					end if; --d_1
				end if; --cont
			end if; --pausa
		end if; --rst e elsif	
		
	end process;
	
------------------------------------------------------------------------

end Behavioral;