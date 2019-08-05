# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath",
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency",
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout",
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients",
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver",
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport",
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls",
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username",
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password"
  ]

  @type t :: %__MODULE__{
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath" => ConfigNodePropertyArray,
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency" => ConfigNodePropertyString,
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout" => ConfigNodePropertyInteger,
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients" => ConfigNodePropertyString,
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver" => ConfigNodePropertyString,
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport" => ConfigNodePropertyInteger,
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls" => ConfigNodePropertyBoolean,
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username" => ConfigNodePropertyString,
    :"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqScreensMonitoringImplScreensMonitoringServiceImplProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end
