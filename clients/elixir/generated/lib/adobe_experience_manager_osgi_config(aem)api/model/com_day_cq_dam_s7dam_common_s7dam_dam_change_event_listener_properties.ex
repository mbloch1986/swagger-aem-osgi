# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"cq.dam.s7dam.damchangeeventlistener.enabled"
  ]

  @type t :: %__MODULE__{
    :"cq.dam.s7dam.damchangeeventlistener.enabled" => ConfigNodePropertyBoolean
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"cq.dam.s7dam.damchangeeventlistener.enabled", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
  end
end

