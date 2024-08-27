LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY relogio_module_tb IS
END relogio_module_tb;
 
ARCHITECTURE behavior OF relogio_module_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
    COMPONENT relogio_module
    PORT(
         rst : IN  std_logic;
         clk : IN  std_logic;
         pausa : IN  std_logic;
         conf : IN  std_logic;
         dig_x : OUT  std_logic_vector(6 downto 0);
         anodo : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    
    --Inputs
    signal rst : std_logic := '0';
    signal clk : std_logic := '0';
    signal pausa : std_logic := '0';
    signal conf : std_logic := '0';

    --Outputs
    signal dig_x : std_logic_vector(6 downto 0);
    signal anodo : std_logic_vector(3 downto 0);

    -- Clock period definitions
    constant clk_period : time := 10 ns;
    
    -- Counter values for simulation
    signal d_1 : integer range 0 to 10 := 0;
    signal d_2 : integer range 0 to 10 := 0;
    signal d_3 : integer range 0 to 10 := 0;
    signal d_4 : integer range 0 to 10 := 0;
    signal d_5 : integer range 0 to 10 := 0;
    signal d_6 : integer range 0 to 10 := 0;
 
BEGIN
 
    -- Instantiate the Unit Under Test (UUT)
    uut: relogio_module PORT MAP (
          rst => rst,
          clk => clk,
          pausa => pausa,
          conf => conf,
          dig_x => dig_x,
          anodo => anodo
        );

    -- Clock process definitions
    clk_process :process
    begin
        clk <= '0';
        wait for clk_period/2;
        clk <= '1';
        wait for clk_period/2;
    end process;
 
    -- Stimulus process
    stim_proc: process
    begin   
        
        -- Simulation of counter values
        for i in 0 to 599 loop
            d_1 <= i mod 10;
            d_2 <= (i / 10) mod 6;
            d_3 <= (i / 60) mod 10;
            d_4 <= (i / 600) mod 6;
            d_5 <= (i / 3600) mod 10;
            d_6 <= (i / 36000) mod 6;
            wait for clk_period;
        end loop;

        -- Wait for simulation to end
        wait;
    end process;

END;
