 /* GENERATED WITH IMGUI BUILDER :) HAS 11 Objs & 1 forms */


void gui_builder0()
{
ImGui::SetNextWindowSize({566.f,292.f});

ImGui::Begin( "Rust script simple imgui - by hj.#4337");
ImGui::SetCursorPos({9.f,32.f});
ImGui::Checkbox("Enable", &the_bool);
ImGui::SetCursorPos({91.f,32.f});
ImGui::Checkbox("AutoDetection", &the_bool);
ImGui::SetCursorPos({10.f,84.f});
ImGui::PushItemWidth(399.000000);
ImGui::SliderInt("", &valueI,0,100);
ImGui::PopItemWidth( );
ImGui::SetCursorPos({10.f,60.f});
ImGui::PushItemWidth(133.000000);
ImGui::Text("Script Humanization");
ImGui::PopItemWidth( );
ImGui::SetCursorPos({11.f,109.f});
ImGui::PushItemWidth(445.000000);
ImGui::SliderInt("Y-axis", &valueI,0,100);
ImGui::PopItemWidth( );
ImGui::SetCursorPos({11.f,135.f});
ImGui::PushItemWidth(445.000000);
ImGui::SliderInt("X-axis", &valueI,0,100);
ImGui::PopItemWidth( );
ImGui::SetCursorPos({10.f,184.f});
ImGui::Checkbox("Instant Eoka", &the_bool);
ImGui::SetCursorPos({12.f,163.f});
ImGui::PushItemWidth(28.000000);
ImGui::Text("MISC");
ImGui::PopItemWidth( );
ImGui::SetCursorPos({10.f,208.f});
ImGui::Checkbox("Auto Run", &the_bool);
ImGui::SetCursorPos({10.f,231.f});
ImGui::Checkbox("Afk (moves in every 10 seconds)", &the_bool);
ImGui::SetCursorPos({400.f,31.f});
ImGui::Checkbox("checkbox10", &the_bool);


ImGui::End();
}


