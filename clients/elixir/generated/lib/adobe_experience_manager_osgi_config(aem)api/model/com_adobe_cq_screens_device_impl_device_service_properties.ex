# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqScreensDeviceImplDeviceServiceProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"com.adobe.aem.screens.player.pingfrequency",
    :"com.adobe.aem.screens.device.pasword.specialchars",
    :"com.adobe.aem.screens.device.pasword.minlowercasechars",
    :"com.adobe.aem.screens.device.pasword.minuppercasechars",
    :"com.adobe.aem.screens.device.pasword.minnumberchars",
    :"com.adobe.aem.screens.device.pasword.minspecialchars",
    :"com.adobe.aem.screens.device.pasword.minlength"
  ]

  @type t :: %__MODULE__{
    :"com.adobe.aem.screens.player.pingfrequency" => ConfigNodePropertyInteger,
    :"com.adobe.aem.screens.device.pasword.specialchars" => ConfigNodePropertyString,
    :"com.adobe.aem.screens.device.pasword.minlowercasechars" => ConfigNodePropertyInteger,
    :"com.adobe.aem.screens.device.pasword.minuppercasechars" => ConfigNodePropertyInteger,
    :"com.adobe.aem.screens.device.pasword.minnumberchars" => ConfigNodePropertyInteger,
    :"com.adobe.aem.screens.device.pasword.minspecialchars" => ConfigNodePropertyInteger,
    :"com.adobe.aem.screens.device.pasword.minlength" => ConfigNodePropertyInteger
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqScreensDeviceImplDeviceServiceProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"com.adobe.aem.screens.player.pingfrequency", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"com.adobe.aem.screens.device.pasword.specialchars", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"com.adobe.aem.screens.device.pasword.minlowercasechars", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"com.adobe.aem.screens.device.pasword.minuppercasechars", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"com.adobe.aem.screens.device.pasword.minnumberchars", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"com.adobe.aem.screens.device.pasword.minspecialchars", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"com.adobe.aem.screens.device.pasword.minlength", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
  end
end

