import numpy as np
import matplotlib.pyplot as plt

def intensity_n_slit(theta, N, d, a, lam):
    beta = (np.pi * d * np.sin(theta)) / lam
    alpha = (np.pi * a * np.sin(theta)) / lam
    
    # Interference term (sin(N*beta)/sin(beta))^2
    # Handle division by zero for beta = 0, pi, etc.
    with np.errstate(divide='ignore', invalid='ignore'):
        interference = (np.sin(N * beta) / np.sin(beta))**2
        interference[np.abs(np.sin(beta)) < 1e-9] = N**2  # L'Hopital limit
        
    # Diffraction term (sin(alpha)/alpha)^2
    with np.errstate(divide='ignore', invalid='ignore'):
        diffraction = (np.sin(alpha) / alpha)**2
        diffraction[np.abs(alpha) < 1e-9] = 1.0
        
    return interference * diffraction

# Parameters
lam = 600e-9  # Wavelength
N = 6         # Number of slits
theta = np.linspace(-0.005, 0.005, 1000) # Angle range

# Case 1: Missing Order n=2 (d/a = 2)
d1 = 40e-6 
a1 = d1 / 2
I1 = intensity_n_slit(theta, N, d1, a1, lam)
I1_norm = I1 / np.max(I1)

# Case 2: Missing Order n=4 (d/a = 4)
d2 = 40e-6
a2 = d2 / 4
I2 = intensity_n_slit(theta, N, d2, a2, lam)
I2_norm = I2 / np.max(I2)

# Plotting
fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(8, 8))

# Plot 1
ax1.plot(theta * 1e3, I1_norm, color='black')
ax1.set_title(r'N=6 Diffraction Pattern with Missing Order $n=2$ ($b/d=1/2$)')
ax1.set_ylabel(r'$I/I_0$')
ax1.set_xlabel(r'$\theta$ (mrad)')
ax1.grid(True, alpha=0.3)

# Plot 2
ax2.plot(theta * 1e3, I2_norm, color='black')
ax2.set_title(r'N=6 Diffraction Pattern with Missing Order $n=4$ ($b/d=1/4$)')
ax2.set_ylabel(r'$I/I_0$')
ax2.set_xlabel(r'$\theta$ (mrad)')
ax2.grid(True, alpha=0.3)

plt.tight_layout()
plt.savefig('n_slit_diffraction.png')