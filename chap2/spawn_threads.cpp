void do_work(unsigned id);
void f() {
	std::vector<std::thread> threads;
	for (unsigned i = 0; i < 20; ++i) {
		threads.emplace_back(do_work, i);	// spawn threads
	}
	for (auto& entry: threads)
		entry.join()		// Calls join() on each thread in turn
}