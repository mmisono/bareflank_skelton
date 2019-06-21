#include <vmm.h>
#include <atomic>

void global_init()
{
    bfdebug_info(0, "skelton global init");
    bfdebug_lnbr(0);
}

void global_fini()
{
    bfdebug_info(0, "skelton global exit");
}

bool vmcall_handler(vcpu_t *vcpu)
{
    bfignored(vcpu);

    guard_exceptions([&] {
        if (vcpu->rax() == 0x1234) {
            bfdebug_ndec(0, "vmcall: ", vcpu->rax());
        }
    });

    // advance the IP
    return vcpu->advance();
}

void vcpu_init_nonroot(vcpu_t *vcpu)
{
    using namespace vmcs_n::exit_reason::basic_exit_reason;

    bfdebug_info(0, "vcpu init nonroot");
    vcpu->add_handler(cpuid, ::vmcall_handler);
}

void vcpu_fini_nonroot(vcpu_t *vcpu)
{
    bfdebug_info(0, "vcpu fini nonroot");
}
