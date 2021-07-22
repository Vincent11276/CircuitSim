#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Electricity
{
public:
    int voltage;
    int current;
    int frequency;

    int getPower()
    {
        return voltage * frequency;
    }
};

class Terminal
{
private:
    std::vector<Terminal> m_attachedTerminals;    

public:
    Electricity electricity;

    void applyElectricity(Electricity &electricity)
    {
        electricity = electricity;

        for (auto &node: m_attachedTerminals)
        {
            node.applyElectricity(electricity);
        }
    }

    void attach(Terminal &p_node)
    {
        m_attachedTerminals.push_back(p_node);
    }

    std::vector<Terminal> getAttachedNodes()
    {
        return m_attachedTerminals;
    }
};


typedef enum
{
    Battery,
    Lamp,
    Wire
} ComponentType;


typedef enum
{
    Anode,
    Cathode
} TerminalType;


class Component
{
private:
    std::TerminalType<TerminalType, Terminal> nodes;

public:    
    ComponentType   type;

    uint32_t        id;

    void addNode(TerminalType type)
    {
        nodes[type] = Terminal();
    }

    Terminal &getNode(TerminalType type)
    {
        return nodes[type];
    }
};


class Battery : public Component
{
public:
    Battery()
    {
        addNode(TerminalType::Anode);
        addNode(TerminalType::Cathode);
    }
};


int main()
{
    Battery a;

    

    return EXIT_SUCCESS;   
}



/* useless code for now
class Terminals
{
private:
    Component &m_component;

    std::unordered_map<NodeType, Terminal> m_nodes;

public:
    Terminals(Component &p_component) 
        : m_component(p_component) { }

    Component& getComponent()
    {
        return m_component;
    }

    void addTerminal(NodeType type)
    {
        m_nodes[type] = Terminal();
    }

    Terminal &getTerminal(NodeType type)
    {
        return m_nodes[type];
    }
};*/
