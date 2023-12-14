reg[18:0] %*\hl{\{L\}}*) tag0[256], tag1[256];
reg[18:0] %*\hl{\{L\}}*) tag2[256], tag3[256];
wire[7:0] %*\hl{\{L\}}*) index;
//Par(0)=Par(1)=L Par(2) = Par(3) = H
wire[1:0] %*\hl{\{Par(way)\}}*) way;
wire[18:0] %*\hl{\{Par(way)\}}*) tag_in;
wire %*\hl{\{Par(way)\}}*) write_enable;

always @ (posedge clock) begin
    if (write_enable) begin
        case (way)
        0: begin tag0[index] = tag_in; end
        1: begin tag1[index] = tag_in; end
        2: begin tag2[index] = tag_in; end
        3: begin tag3[index] = tag_in; end
        endcase
    end
end