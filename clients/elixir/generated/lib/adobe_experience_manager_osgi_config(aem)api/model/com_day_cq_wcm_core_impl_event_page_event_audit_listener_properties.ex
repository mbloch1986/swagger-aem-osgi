# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqWcmCoreImplEventPageEventAuditListenerProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"configured"
  ]

  @type t :: %__MODULE__{
    :"configured" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqWcmCoreImplEventPageEventAuditListenerProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"configured", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end
