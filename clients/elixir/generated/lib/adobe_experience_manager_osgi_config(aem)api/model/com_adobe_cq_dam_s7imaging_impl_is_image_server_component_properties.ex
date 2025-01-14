# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqDamS7imagingImplIsImageServerComponentProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"TcpPort",
    :"AllowRemoteAccess",
    :"MaxRenderRgnPixels",
    :"MaxMessageSize",
    :"RandomAccessUrlTimeout",
    :"WorkerThreads"
  ]

  @type t :: %__MODULE__{
    :"TcpPort" => ConfigNodePropertyString,
    :"AllowRemoteAccess" => ConfigNodePropertyBoolean,
    :"MaxRenderRgnPixels" => ConfigNodePropertyString,
    :"MaxMessageSize" => ConfigNodePropertyString,
    :"RandomAccessUrlTimeout" => ConfigNodePropertyInteger,
    :"WorkerThreads" => ConfigNodePropertyInteger
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqDamS7imagingImplIsImageServerComponentProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"TcpPort", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"AllowRemoteAccess", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"MaxRenderRgnPixels", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"MaxMessageSize", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"RandomAccessUrlTimeout", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"WorkerThreads", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
  end
end

