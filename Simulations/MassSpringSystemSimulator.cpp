#include "MassSpringSystemSimulator.h"
MassSpringSystemSimulator::MassSpringSystemSimulator() {

}
const  char* MassSpringSystemSimulator::getTestCasesStr() {

}
void MassSpringSystemSimulator::initUI(DrawingUtilitiesClass* DUC) {

}
void MassSpringSystemSimulator::reset() {

}
void MassSpringSystemSimulator::drawFrame(ID3D11DeviceContext* pd3dImmediateContext) {

}
void MassSpringSystemSimulator::notifyCaseChanged(int testCase) {

}
void MassSpringSystemSimulator::externalForcesCalculations(float timeElapsed) {

}
void MassSpringSystemSimulator::simulateTimestep(float timeStep) {

}
void MassSpringSystemSimulator::onClick(int x, int y) {

}
void MassSpringSystemSimulator::onMouse(int x, int y) {

}

// Specific Functions
void MassSpringSystemSimulator::setMass(float mass) {

}
void MassSpringSystemSimulator::setStiffness(float stiffness) {

}
void MassSpringSystemSimulator::setDampingFactor(float damping) {

}
int MassSpringSystemSimulator::addMassPoint(Vec3 position, Vec3 Velocity, bool isFixed) {

}
void MassSpringSystemSimulator::addSpring(int masspoint1, int masspoint2, float initialLength) {

}
int MassSpringSystemSimulator::getNumberOfMassPoints() {

}
int MassSpringSystemSimulator::getNumberOfSprings() {

}
Vec3 MassSpringSystemSimulator::getPositionOfMassPoint(int index) {

}
Vec3 MassSpringSystemSimulator::getVelocityOfMassPoint(int index) {

}
void MassSpringSystemSimulator::applyExternalForce(Vec3 force) {

}