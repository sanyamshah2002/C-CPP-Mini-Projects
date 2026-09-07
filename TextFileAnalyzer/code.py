def Text_File_Analyzer(file_path):
    with open(file_path,'r',encoding='utf-8',errors='ignore') as file:
        lines=file.readlines()
        line_count=len(lines)
        word_count=sum(len(line.split()) for line in lines)
        char_count=sum(len(line)for line in lines)
    return line_count, word_count,char_count





file_path='AboutCode.txt' 
lines,words,characters=Text_File_Analyzer(file_path)
print(f"lines:{lines},words:{words},characters:{characters}")
    