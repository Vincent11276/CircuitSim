from enum import Enum


class Electrity:
    voltage = 0
    current = 0
    
    def getPower():
        return voltage * current


class NodeType(Enum):
    Anode = 0
    Cathode = 1
    Nil = 2

class Node:
    electricity = Electrity()

    def __init__(nodeType: NodeType):
        self.nodeType = nodeType
        self.connectedNodes = []

    def applyElectricity(electricity: Electrity):
        electricity = electricity

    def getComponent():
        pass

    def getConnectedNodes():
        return connectedNodes

    def attach(node: Node):
        self.connectedNodes.append(node)
        node.applyElectricity(electricity)


class ComponentType(Enum):
    Battery = 0
    Wire    = 1
    Lamp    = 2


class Component:
    def __init__(comType: ComponentType):
        self.comType = comType
        self.nodes = []

    def addNode(nodeType: NodeType) -> Null:
        nodes.append(nodeType)

    def getNode(nodeType: NodeType) -> Node:
        for node in self.nodes:
            if node.nodeType = nodeType:
                return node


class Battery(Component):
    voltage = 0

    def __init__(voltage=0):
        setVoltage(voltage)
        initNodes()

    def initNodes():
        nodes.append(Node(NodeType.Anode))
        nodes.append(Node(NodeType.Cathode))

    def setVoltage():
        voltage = voltage




if __name__ == '__main__':
    battery1 = Battery()
    battery1.setVoltage(9)

    battery1 = Battery()
    battery1.setVoltage(9)

    battery1.getNode(NodeType.Anode).attach(battery1.getNode())

