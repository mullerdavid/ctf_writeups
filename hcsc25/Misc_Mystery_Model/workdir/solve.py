import torch
import torch.nn as nn
from torchinfo import summary

import numpy as np

class FlagModel(nn.Module):
    def __init__(self):
        super().__init__()
        self.fc1 = nn.Linear(1, 128)
        self.relu = nn.ReLU()
        self.fc2 = nn.Linear(128, 52)
    
    def forward(self, x):
        x = self.fc1(x)
        x = self.relu(x)
        x = self.fc2(x)
        return x


model = FlagModel()
# summary(model, (1,1))

checkpoint = torch.load('challenge/mystery_model.pt', weights_only=True)
model.load_state_dict(checkpoint['model'])

model.eval()
device = torch.device("cuda")
model.to(device)

def convert(flot):
    return int(round(flot))
    
hcsc = [ord(c) for c in "HCSC{"]

for i in np.arange(0.0, 1.1, 0.01):
    i = float(i)
    sample_input = torch.tensor([[i]], device=device)
    with torch.no_grad():
        prediction = model(sample_input)

    rounded_prediction = [(convert(i)) for i in prediction.tolist()[0]]
    if hcsc == rounded_prediction[:len(hcsc)]:
        flag = ''.join(chr(c) for c in rounded_prediction)
        print(f"{i}: {flag}")
        break
   