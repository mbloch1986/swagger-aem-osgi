# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqWcmWebservicesupportImplReplicationEventListenerProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"Flush agents"
  ]

  @type t :: %__MODULE__{
    :"Flush agents" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqWcmWebservicesupportImplReplicationEventListenerProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"Flush agents", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

