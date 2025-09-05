# Assembly Guide

## Smart Dustbin Assembly Instructions

### Step 1: Prepare the Dustbin
1. Choose a dustbin with a lid that can be modified
2. Ensure the lid can be opened/closed by a servo motor
3. Clean and prepare the surface for mounting components

### Step 2: Mount the Ultrasonic Sensor
1. **Location**: Mount the HC-SR04 sensor at the front of the dustbin
2. **Height**: Position at a height where it can detect approaching objects
3. **Angle**: Point the sensor slightly downward for better detection
4. **Mounting**: Use brackets, double-sided tape, or screws to secure
5. **Protection**: Consider adding a small shield to protect from dust

### Step 3: Install the Servo Motor
1. **Location**: Mount the servo motor near the lid mechanism
2. **Connection**: Connect servo horn to the lid opening mechanism
3. **Range**: Ensure servo can rotate 0° to 180° without obstruction
4. **Mounting**: Secure servo firmly to prevent movement during operation
5. **Linkage**: Create a linkage system between servo and lid

### Step 4: Mount the Arduino
1. **Location**: Place Arduino in a protected area (inside dustbin or external box)
2. **Access**: Ensure USB port is accessible for programming
3. **Protection**: Use a project box or enclosure to protect from dust/moisture
4. **Ventilation**: Ensure adequate ventilation if using an enclosure

### Step 5: Wiring
1. **Route Wires**: Carefully route all wires to avoid interference
2. **Secure**: Use cable ties or clips to secure wires
3. **Length**: Ensure wires are long enough for movement but not excessive
4. **Protection**: Protect wires from sharp edges and moving parts

### Step 6: Power Supply
1. **Arduino**: Connect via USB or external power adapter
2. **Servo**: Ensure adequate power supply (consider external supply for heavy loads)
3. **Sensor**: HC-SR04 can be powered from Arduino 5V pin
4. **Backup**: Consider battery backup for portable operation

### Step 7: Testing and Calibration
1. **Upload Code**: Upload the Arduino sketch
2. **Test Sensor**: Verify ultrasonic sensor readings via serial monitor
3. **Test Servo**: Check servo movement range and smoothness
4. **Calibrate**: Adjust distance threshold and servo angles if needed
5. **Fine-tune**: Test with actual objects and adjust timing

### Step 8: Final Assembly
1. **Secure All Components**: Ensure all parts are properly secured
2. **Test Full System**: Perform complete system test
3. **Clean Up**: Organize wires and clean the assembly
4. **Documentation**: Take photos for future reference

## Tips for Success

### Mechanical Design:
- Use proper servo horns and linkages
- Ensure smooth lid movement
- Consider lid weight and servo torque
- Plan for easy maintenance access

### Electrical Design:
- Use proper wire gauge for servo connections
- Implement proper grounding
- Consider EMI shielding if needed
- Plan for easy component replacement

### Software Considerations:
- Test with various object sizes
- Implement error handling
- Add safety features (timeout, limits)
- Consider power management

## Common Issues and Solutions

### Servo Issues:
- **Not moving**: Check power supply and connections
- **Jittery movement**: Check for mechanical binding
- **Insufficient torque**: Use external power supply
- **Overheating**: Reduce duty cycle or improve ventilation

### Sensor Issues:
- **Inaccurate readings**: Check mounting and alignment
- **False triggers**: Adjust sensitivity and add filtering
- **Range issues**: Verify power supply and connections
- **Environmental**: Consider temperature and humidity effects

### System Issues:
- **Arduino resets**: Check power supply capacity
- **Intermittent operation**: Check all connections
- **Timing issues**: Adjust delays and thresholds
- **Power consumption**: Implement sleep modes if needed
