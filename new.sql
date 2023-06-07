begin
    for i IN 1..10 loop
        if i mod 2 = 1 then
            dbms_output.put_line('FYBBA(CA)');
        else
            dbms_output.put_line('fybba(ca)');
        end if;
    end loop;
end;
/
