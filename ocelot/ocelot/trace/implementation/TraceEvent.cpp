/*!
	\file TraceEvent.cpp

	\author Andrew Kerr <arkerr@gatech.edu>

	\brief declares TraceEvent class for recording runtime information

*/

#include <ocelot/trace/interface/TraceEvent.h>

trace::TraceEvent::TraceEvent():
	blockId(0, 0, 0),
	PC(0),
	gridDim(0, 0, 0),
	blockDim(0, 0, 0),
	stackVisitNodes(0),
	stackVisitEnd(0),
	stackVisitMiddle(0),
	stackInsert(0),
	stackMerge(0)
{

}

/*!
	Constructs a TraceEvent object
*/
trace::TraceEvent::TraceEvent(
			ir::Dim3 t_blockId,
			ir::PTXU64 t_PC, 
			const ir::PTXInstruction * t_instruction, 
			const boost::dynamic_bitset<> & t_active,
			const U64Vector & t_memory_addresses,
			ir::PTXU32 t_memory_size,
			ir::PTXU32 ctxStackSize) :
	blockId(t_blockId),
	PC(t_PC),
	contextStackSize(ctxStackSize),
	instruction(t_instruction),
	active(t_active),
	memory_addresses(t_memory_addresses),
	memory_size(t_memory_size),
	gridDim(0, 0, 0),
	blockDim(0, 0, 0)
{

}

std::string trace::TraceEvent::toString() const
{

	std::stringstream stream;
	stream << "(" << PC << ") : \"" << instruction->toString() << "\" [" 
		<< active << "]";

	U64Vector::const_iterator address = memory_addresses.begin();
	
	if( !memory_addresses.empty() )
	{
		stream << " : <" << (void*)*address << std::dec 
			<< ", " << memory_size << ">";
	
		++address;
	}
	
	for( ; address != memory_addresses.end(); ++address )
	{
	
		stream << " <" << (void*)*address << std::dec 
			<< ", " << memory_size << ">";
	
	}
	
	return stream.str();

}

