#pragma once

#include "App.xaml.g.h"

namespace activation = winrt::Windows::ApplicationModel::Activation;

namespace winrt::RNSidecarDemo::implementation
{
    struct App : AppT<App>
    {
        App() noexcept;
        void OnLaunched(activation::LaunchActivatedEventArgs const&);
        void OnSuspending(IInspectable const&, Windows::ApplicationModel::SuspendingEventArgs const&);
        void OnNavigationFailed(IInspectable const&, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const&);
      private:
        using super = AppT<App>;
    };
} // namespace winrt::RNSidecarDemo::implementation
